
@interface _WBSCRDTPositionGeneratorStride : NSObject {
    WBSCRDTPosition * _afterPosition;
    WBSCRDTPosition * _beforePosition;
    NSArray * _recordNames;
}

@property (nonatomic, readonly, copy) WBSCRDTPosition *afterPosition;
@property (nonatomic, readonly, copy) WBSCRDTPosition *beforePosition;
@property (nonatomic, readonly, copy) NSArray *recordNames;

- (void).cxx_destruct;
- (id)afterPosition;
- (id)beforePosition;
- (id)description;
- (id)initWithRecordNames:(id)arg1 beforePosition:(id)arg2 afterPosition:(id)arg3;
- (id)recordNames;

@end
