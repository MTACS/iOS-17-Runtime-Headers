
@interface MUTrailSelectionInfo : NSObject {
    unsigned long long  _trailID;
    NSString * _trailName;
}

@property (nonatomic) unsigned long long trailID;
@property (nonatomic, copy) NSString *trailName;

- (void).cxx_destruct;
- (id)initWithTrailID:(unsigned long long)arg1 trailName:(id)arg2;
- (void)setTrailID:(unsigned long long)arg1;
- (void)setTrailName:(id)arg1;
- (unsigned long long)trailID;
- (id)trailName;

@end
