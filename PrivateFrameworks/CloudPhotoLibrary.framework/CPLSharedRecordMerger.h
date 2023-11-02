
@interface CPLSharedRecordMerger : NSObject <CPLSharedRecordMerger> {
    <CPLSharedRecordPropertyMapping> * _mapping;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CPLSharedRecordPropertyMapping> *mapping;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMapping:(id)arg1;
- (id)mapping;
- (void)mergeRecord:(id)arg1 isSharedRecord:(bool)arg2 inPrivateRecord:(id)arg3;

@end
