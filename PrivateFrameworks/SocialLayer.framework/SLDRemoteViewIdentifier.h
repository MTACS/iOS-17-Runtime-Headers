
@interface SLDRemoteViewIdentifier : NSObject {
    UISSlotStyle * _style;
    SLDSlotTag * _tag;
}

@property (nonatomic, retain) UISSlotStyle *style;
@property (nonatomic, retain) SLDSlotTag *tag;

+ (id)identifierForStyle:(id)arg1 tag:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStyle:(id)arg1 tag:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTag:(id)arg1;
- (id)style;
- (id)tag;

@end
