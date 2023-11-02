
@interface HMBLocalZoneConfiguration : HMFObject <NSCopying, NSMutableCopying> {
    bool  _createIfNeeded;
    <HMBLocalZoneDelegate> * _delegate;
    HMBModelContainer * _modelContainer;
    bool  _readOnly;
}

@property (nonatomic) bool createIfNeeded;
@property (nonatomic) <HMBLocalZoneDelegate> *delegate;
@property (nonatomic, retain) HMBModelContainer *modelContainer;
@property (nonatomic) bool readOnly;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createIfNeeded;
- (id)delegate;
- (id)modelContainer;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)readOnly;
- (void)setCreateIfNeeded:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModelContainer:(id)arg1;
- (void)setReadOnly:(bool)arg1;

@end
