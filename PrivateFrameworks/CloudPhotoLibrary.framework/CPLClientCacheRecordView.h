
@interface CPLClientCacheRecordView : CPLRecordView {
    CPLRecordChange * _cloudRecord;
    <CPLEngineIDMapping> * _idMapping;
    CPLScopedIdentifier * _localScopedIdentifier;
}

@property (nonatomic, readonly) CPLRecordChange *cloudRecord;
@property (nonatomic, readonly) <CPLEngineIDMapping> *idMapping;
@property (nonatomic, readonly) CPLScopedIdentifier *localScopedIdentifier;

- (void).cxx_destruct;
- (id)cloudRecord;
- (id)description;
- (id)idMapping;
- (id)initWithLocalScopedIdentifier:(id)arg1 cloudRecord:(id)arg2 idMapping:(id)arg3;
- (id)localScopedIdentifier;
- (id)recordChangeData;
- (Class)recordClass;
- (id)redactedDescription;
- (id)relatedScopedIdentifier;
- (id)relation;
- (id)scopedIdentifier;
- (id)secondaryScopedIdentifier;
- (id)sharingRecordChangeData;
- (id)synthesizedRecord;

@end
