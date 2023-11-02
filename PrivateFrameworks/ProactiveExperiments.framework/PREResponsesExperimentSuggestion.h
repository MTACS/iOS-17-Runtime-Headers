
@interface PREResponsesExperimentSuggestion : NSObject <NSCopying, NSSecureCoding> {
    bool  _dynamicReply;
    NSString * _title;
}

@property (getter=isDynamicReply, nonatomic) bool dynamicReply;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isDynamicReply;
- (bool)isEqual:(id)arg1;
- (void)setDynamicReply:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
