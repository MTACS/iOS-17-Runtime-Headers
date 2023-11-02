
@interface PPSocialHighlight : NSObject <NSSecureCoding> {
    NSArray * _attributionIdentifiers;
    NSString * _identifier;
    NSURL * _resourceURL;
    NSNumber * _score;
    NSDictionary * _supplementaryData;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSArray *attributionIdentifiers;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSURL *resourceURL;
@property (nonatomic, readonly) NSNumber *score;
@property (nonatomic, readonly) NSDictionary *supplementaryData;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributionIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 resourceURL:(id)arg2 timestamp:(id)arg3 attributionIdentifiers:(id)arg4 supplementaryData:(id)arg5;
- (id)initWithIdentifier:(id)arg1 resourceURL:(id)arg2 timestamp:(id)arg3 attributionIdentifiers:(id)arg4 supplementaryData:(id)arg5 score:(id)arg6;
- (id)resourceURL;
- (id)score;
- (id)supplementaryData;
- (id)timestamp;

@end
