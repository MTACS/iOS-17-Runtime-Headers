
@interface MapsSuggestionsQueue : NSObject <MapsSuggestionsObject> {
    struct unique_ptr<MSg::Queue, std::default_delete<MSg::Queue>> { 
        struct __compressed_pair<MSg::Queue *, std::default_delete<MSg::Queue>> { 
            struct Queue {} *__value_; 
        } __ptr_; 
    }  _cppQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *innerQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)serialQueueWithName:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)asyncBlock:(id /* block */)arg1;
- (id)initSerialQueueWithName:(id)arg1;
- (id)innerQueue;
- (bool)syncBOOLReturningBlock:(id /* block */)arg1;
- (void)syncBlock:(id /* block */)arg1;
- (id)syncReturningBlock:(id /* block */)arg1;
- (id)uniqueName;

@end
