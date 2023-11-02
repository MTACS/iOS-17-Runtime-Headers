
@interface BGHealthResearchTaskRequest : BGProcessingTaskRequest {
    NSString * _protectionTypeOfRequiredData;
}

@property NSString *protectionTypeOfRequiredData;

+ (Class)_correspondingTaskClass;
+ (id)_requestFromActivity:(id)arg1;

- (id)_activity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)protectionTypeOfRequiredData;
- (void)setProtectionTypeOfRequiredData:(id)arg1;

@end
