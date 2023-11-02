
@interface CLSOpenResponseAnswerFormat : CLSAnswerFormat <CLSRelationable> {
    bool  _allowsMultimedia;
    long long  _maximumTextLength;
    long long  _minimumTextLength;
    NSString * _teacherProvidedText;
    long long  _type;
}

@property (nonatomic) bool allowsMultimedia;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maximumTextLength;
@property (nonatomic) long long minimumTextLength;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *teacherProvidedText;
@property (nonatomic) long long type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsMultimedia;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 starterText:(id)arg2 minimumLength:(long long)arg3 maximumLength:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (long long)maximumTextLength;
- (void)mergeWithObject:(id)arg1;
- (long long)minimumTextLength;
- (void)setAllowsMultimedia:(bool)arg1;
- (void)setMaximumTextLength:(long long)arg1;
- (void)setMinimum:(long long)arg1;
- (void)setMinimumTextLength:(long long)arg1;
- (void)setTeacherProvidedText:(id)arg1;
- (void)setType:(long long)arg1;
- (id)teacherProvidedText;
- (long long)type;
- (bool)validateObject:(id*)arg1;

@end
