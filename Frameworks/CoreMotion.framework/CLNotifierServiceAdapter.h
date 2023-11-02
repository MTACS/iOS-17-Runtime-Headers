
@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol> {
    struct map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, int>>> { 
        struct __tree<std::__value_type<unsigned long, int>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, int>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, int>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, int>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, int>, std::less<unsigned long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _clients;
    struct CLNotifierBase { int (**x1)(); } * _notifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CLNotifierBase { int (**x1)(); }*notifier;
@property (readonly) Class superclass;
@property (nonatomic) bool valid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)forget:(void *)arg1; // needs 1 arg types, found 2: byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, id
- (id)init;
- (void)invalidate;
- (struct CLNotifierBase { int (**x1)(); }*)notifier;
- (int)notifierClientNumForCoparty:(id)arg1;
- (void)register:(void *)arg1 forNotification:(void *)arg2 registrationInfo:(void *)arg3; // needs 3 arg types, found 4: byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, id, int, id
- (void)setAdaptedNotifier:(struct CLNotifierBase { int (**x1)(); }*)arg1;
- (void)unregister:(void *)arg1 forNotification:(void *)arg2; // needs 2 arg types, found 3: byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, id, int

@end
