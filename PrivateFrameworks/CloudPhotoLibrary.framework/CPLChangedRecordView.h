
@interface CPLChangedRecordView : CPLRecordView {
    CPLRecordView * _baseRecordView;
    CPLRecordChange * _change;
}

@property (nonatomic, readonly) CPLRecordView *baseRecordView;
@property (nonatomic, readonly) CPLRecordChange *change;

- (void).cxx_destruct;
- (id)baseRecordView;
- (id)change;
- (id)changeForType:(unsigned long long)arg1;
- (id)description;
- (id)initWithChange:(id)arg1 overRecordView:(id)arg2;
- (id)placeholderRecord;
- (id)recordChangeData;
- (Class)recordClass;
- (id)redactedDescription;
- (id)scopedIdentifier;
- (id)sharingRecordChangeData;
- (id)synthesizedRecord;

@end
