
@interface HMBLocalDatabaseConfiguration : HMFObject <NSCopying> {
    HMBModelContainer * _modelContainer;
    bool  _readOnly;
}

@property (nonatomic, retain) HMBModelContainer *modelContainer;
@property (nonatomic) bool readOnly;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)modelContainer;
- (bool)readOnly;
- (void)setModelContainer:(id)arg1;
- (void)setReadOnly:(bool)arg1;

@end
