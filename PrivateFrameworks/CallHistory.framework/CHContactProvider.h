
@interface CHContactProvider : NSObject <CHCallContactProvider> {
    <CHContactDataSource> * _dataSource;
}

@property (nonatomic, readonly) <CHContactDataSource> *dataSource;

- (void).cxx_destruct;
- (id)contactsByHandleForCalls:(id)arg1 keyDescriptors:(id)arg2 error:(id*)arg3;
- (id)contactsByHandleForHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id*)arg3;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;

@end
