
@interface CRDataDetectorsGroupOutputRegion : CRCompositeOutputRegion {
    unsigned long long  _groupType;
}

@property (nonatomic, readonly) unsigned long long groupType;

- (bool)computesBoundsFromChildren;
- (bool)computesTranscriptFromChildren;
- (id)dataDetectorsOutputRegions;
- (id)debugDescription;
- (unsigned long long)groupType;
- (id)initWithDDRegions:(id)arg1 children:(id)arg2 groupType:(unsigned long long)arg3;
- (unsigned long long)type;

@end
