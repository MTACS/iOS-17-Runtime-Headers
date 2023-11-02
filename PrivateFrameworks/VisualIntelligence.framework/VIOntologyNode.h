
@interface VIOntologyNode : NSObject <NSCopying, NSSecureCoding> {
    NSString * _knowledgeGraphID;
    NSString * _labelDebugDescription;
}

@property (nonatomic, readonly, copy) NSString *knowledgeGraphID;
@property (nonatomic, readonly, copy) NSString *labelDebugDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKnowledgeGraphID:(id)arg1 labelDebugDescription:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)knowledgeGraphID;
- (id)labelDebugDescription;

@end
