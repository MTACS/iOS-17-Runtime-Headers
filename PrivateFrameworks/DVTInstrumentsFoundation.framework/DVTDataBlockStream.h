
@interface DVTDataBlockStream : NSObject <DVTInputStream, DVTOutputStream> {
    struct list<NSData *, std::allocator<NSData *>> { 
        struct __list_node_base<NSData *, void *> { 
            void *__prev_; 
            void *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::allocator<std::__list_node<NSData *, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _records;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsPeek;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createNextStream:(id*)arg1;
- (bool)hasData;
- (bool)hasSpace;
- (id)peek:(unsigned long long)arg1 error:(id*)arg2;
- (id)read:(unsigned long long)arg1 error:(id*)arg2;
- (bool)supportsPeek;
- (long long)write:(id)arg1 error:(id*)arg2;

@end
