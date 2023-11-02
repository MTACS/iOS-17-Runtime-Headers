
@interface RFVisualProperty : NSObject <NSCopying, NSSecureCoding, RFVisualProperty> {
    struct { 
        unsigned int is_safe_for_logging : 1; 
    }  _has;
    bool  _is_safe_for_logging;
    NSArray * _visual_elements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool is_safe_for_logging;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *visual_elements;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIs_safe_for_logging;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)is_safe_for_logging;
- (id)jsonData;
- (void)setIs_safe_for_logging:(bool)arg1;
- (void)setVisual_elements:(id)arg1;
- (id)visual_elements;

@end
