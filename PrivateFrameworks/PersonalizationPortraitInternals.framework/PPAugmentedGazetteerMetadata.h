
@interface PPAugmentedGazetteerMetadata : NSObject <PPConstructableFromStatement> {
    NSString * _alias;
    NSString * _category;
    unsigned int  _gazetteerDomain;
    bool  _isLocation;
    NSString * _qid;
    double  _threshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithStatement:(id)arg1;

@end
