
@interface ATXSpotlightSuggestionCollection : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    NSString * _contextTitle;
    NSString * _sectionIdentifier;
    NSArray * _suggestions;
}

@property (nonatomic, readonly) NSString *contextTitle;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (nonatomic, readonly) NSArray *suggestions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextTitle;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSuggestions:(id)arg1 contextTitle:(id)arg2 sectionIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXSpotlightSuggestionCollection:(id)arg1;
- (id)proto;
- (id)sectionIdentifier;
- (id)suggestions;

@end
