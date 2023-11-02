
@interface GEOTrailHead : NSObject {
    int  _displayType;
    unsigned long long  _numberOfInlineItems;
    NSArray * _trails;
}

@property (nonatomic, readonly) int displayType;
@property (nonatomic, readonly) unsigned long long numberOfInlineItems;
@property (nonatomic, readonly) NSArray *trails;

+ (int)_convertedDisplayType:(int)arg1;
+ (id)trailsFromProtos:(id)arg1;

- (void).cxx_destruct;
- (int)displayType;
- (id)initWithTrailHead:(id)arg1;
- (unsigned long long)numberOfInlineItems;
- (id)trails;

@end
