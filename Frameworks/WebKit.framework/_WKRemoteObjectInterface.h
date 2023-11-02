
@interface _WKRemoteObjectInterface : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _identifier;
    struct HashMap<SEL *, MethodInfo, WTF::DefaultHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo>, WTF::HashTableTraits> { 
        struct HashTable<SEL *, WTF::KeyValuePair<SEL *, MethodInfo>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, MethodInfo>>, WTF::DefaultHash<SEL *>, WTF::HashMap<SEL *, MethodInfo>::KeyValuePairTraits, WTF::HashTraits<SEL *>> { 
            union { 
                void *m_table; 
                unsigned int *m_tableForLLDB; 
            } ; 
        } m_impl; 
    }  _methods;
    Protocol * _protocol;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) Protocol *protocol;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)remoteObjectInterfaceWithProtocol:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)arg1;
- (const void*)_allowedArgumentClassesForSelector:(SEL)arg1;
- (id)_invocationForReplyBlockOfSelector:(SEL)arg1;
- (id)_invocationForSelector:(SEL)arg1;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)debugDescription;
- (id)identifier;
- (id)initWithProtocol:(id)arg1 identifier:(id)arg2;
- (id)protocol;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_javaScriptClasses;

@end
