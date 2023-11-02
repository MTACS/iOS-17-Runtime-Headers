
@interface SGQuickResponsesEngagementDeltas : NSObject <NSSecureCoding> {
    int  _displayed;
    NSString * _lang;
    int  _matched;
    NSString * _response;
    int  _selected;
}

@property (nonatomic, readonly) int displayed;
@property (nonatomic, readonly) NSString *lang;
@property (nonatomic, readonly) int matched;
@property (nonatomic, readonly) NSString *response;
@property (nonatomic, readonly) int selected;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)displayed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLangResponse:(id)arg1 displayed:(int)arg2 selected:(int)arg3 matched:(int)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQuickResponsesEngagementDeltas:(id)arg1;
- (id)lang;
- (int)matched;
- (id)response;
- (int)selected;

@end
