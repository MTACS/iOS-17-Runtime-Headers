
@interface IDSManagerImpl : NSObject <IDSServiceDelegatePrivate> {
    struct Config { 
        struct IDSSessionService {} *idsSessionService; 
        struct queue { 
            struct object { 
                NSObject<OS_dispatch_object> *fObj; 
            } fObj; 
        } dispatchQueue; 
        struct DynamicString { 
            struct Allocator {} *m_allocator; 
            char *m_buffer; 
            unsigned long long m_capacity; 
            unsigned long long m_length; 
        } serviceID; 
    }  _config;
    bool  _isListeningForInvites;
    IDSService * _service;
    struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> { 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct Subscription {} *m_data; 
        } m_subscriptions; 
        struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription>> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            void *m_data; 
        } m_deferred; 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct SubscriptionLegacy {} *m_data; 
        } m_subscriptionsLegacy; 
        struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy>> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            void *m_data; 
        } m_deferredLegacy; 
        int m_raiseLevel; 
    }  m_acceptedInvite;
    struct DynamicArray<re::IDSInvite *> { 
        struct Allocator {} *m_allocator; 
        unsigned long long m_capacity; 
        unsigned long long m_size; 
        unsigned int m_version; 
        struct IDSInvite {} **m_data; 
    }  m_invites;
    struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>> { 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct Subscription {} *m_data; 
        } m_subscriptions; 
        struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription>> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            void *m_data; 
        } m_deferred; 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct SubscriptionLegacy {} *m_data; 
        } m_subscriptionsLegacy; 
        struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy>> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            void *m_data; 
        } m_deferredLegacy; 
        int m_raiseLevel; 
    }  m_receivedInvite;
    struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> { 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct Subscription {} *m_data; 
        } m_subscriptions; 
        struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription>> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            void *m_data; 
        } m_deferred; 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct SubscriptionLegacy {} *m_data; 
        } m_subscriptionsLegacy; 
        struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy>> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            void *m_data; 
        } m_deferredLegacy; 
        int m_raiseLevel; 
    }  m_rejectedInvite;
    struct DynamicArray<re::IDSDiscoveryView *> { 
        struct Allocator {} *m_allocator; 
        unsigned long long m_capacity; 
        unsigned long long m_size; 
        unsigned int m_version; 
        struct IDSDiscoveryView {} **m_data; 
    }  m_views;
}

@property (nonatomic) struct Config { struct IDSSessionService {} *x1; struct queue { struct object { id x_1_2_1; } x_2_1_1; } x2; struct DynamicString { struct Allocator {} *x_3_1_1; char *x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; } x3; } config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isListeningForInvites;
@property (nonatomic, retain) IDSService *service;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)acceptInvite:(void*)arg1;
- (void*)acceptedInviteEvent;
- (void)broadcastViewUpdate:(void*)arg1;
- (struct Config { struct IDSSessionService {} *x1; struct queue { struct object { id x_1_2_1; } x_2_1_1; } x2; struct DynamicString { struct Allocator {} *x_3_1_1; char *x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; } x3; })config;
- (struct SharedPtr<re::IDSDiscoveryView> { struct IDSDiscoveryView {} *x1; })createDiscoveryViewWithDestinations:(id)arg1 destinations:(id)arg2;
- (struct SharedPtr<re::DiscoveryInvite> { struct DiscoveryInvite {} *x1; })createInviteWithDestinations:(struct Slice<re::DynamicString> { struct DynamicString {} *x1; unsigned long long x2; })arg1;
- (struct SharedPtr<re::DiscoveryInvite> { struct DiscoveryInvite {} *x1; })createInviteWithDiscoveryView:(struct SharedPtr<re::DiscoveryView> { struct DiscoveryView {} *x1; })arg1 destinations:(struct Slice<re::DynamicString> { struct DynamicString {} *x1; unsigned long long x2; })arg2;
- (struct SharedPtr<re::IDSDiscoveryIdentity> { struct IDSDiscoveryIdentity {} *x1; })createLocalIdentity;
- (void)dealloc;
- (id)discoveryViewToNSArray:(void*)arg1 to:(id)arg2;
- (void*)discoveryViewWithGuid:(id)arg1;
- (struct IDSSessionService { int (**x1)(); }*)idsSessionService;
- (void)incomingInviteMessage:(void*)arg1 type:(id)arg2 message:(id)arg3 from:(id)arg4;
- (void)incomingInviteRequest:(id)arg1 payload:(id)arg2 from:(id)arg3;
- (void)incomingViewMessage:(void*)arg1 type:(id)arg2 message:(id)arg3 from:(id)arg4;
- (id)initWithConfig:(struct Config { struct IDSSessionService {} *x1; struct queue { struct object { id x_1_2_1; } x_2_1_1; } x2; struct DynamicString { struct Allocator {} *x_3_1_1; char *x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; } x3; })arg1;
- (void)inviteAcceptedFrom:(void*)arg1 from:(id)arg2;
- (void*)inviteWithGuid:(id)arg1;
- (bool)isListeningForInvites;
- (bool)isLoggedIn;
- (bool)isValidDestinationsArray:(id)arg1;
- (bool)isValidInviteResponse:(id)arg1 message:(id)arg2;
- (bool)isValidViewUpdate:(id)arg1 message:(id)arg2;
- (bool)parseMessage:(id)arg1 payload:(id*)arg2 objectGUID:(id*)arg3 type:(id*)arg4;
- (void*)receivedInviteEvent;
- (void*)rejectedInviteEvent;
- (void)sendInviteRequest:(void*)arg1 destinations:(id)arg2;
- (void)sendMessage:(id)arg1 type:(id)arg2 objectGUID:(id)arg3 to:(id)arg4;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setConfig:(struct Config { struct IDSSessionService {} *x1; struct queue { struct object { id x_1_2_1; } x_2_1_1; } x2; struct DynamicString { struct Allocator {} *x_3_1_1; char *x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; } x3; })arg1;
- (void)setIsListeningForInvites:(bool)arg1;
- (void)setService:(id)arg1;
- (void)setupService;
- (void)startListeningForInvites;
- (void)stopListeningForInvites;
- (void)willDestroyDiscoveryView:(void*)arg1;
- (void)willDestroyInvite:(void*)arg1;

@end
