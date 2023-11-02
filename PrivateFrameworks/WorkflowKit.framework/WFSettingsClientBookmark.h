
@interface WFSettingsClientBookmark : NSObject <NSSecureCoding> {
    <BMBookmark> * _biomeBookmark;
}

@property (nonatomic, retain) <BMBookmark> *biomeBookmark;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionReversalState;
- (id)biomeBookmark;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActionReversalState:(id)arg1;
- (id)initWithBiomeBookmark:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBiomeBookmark:(id)arg1;

@end
