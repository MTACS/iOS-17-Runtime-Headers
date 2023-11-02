
@interface PREResponseItem : NSObject <NSSecureCoding> {
    NSNumber * _categoryId;
    NSNumber * _isCustomResponse;
    NSNumber * _isRobotResponse;
    NSString * _language;
    NSNumber * _modelId;
    NSNumber * _replySubgroupId;
    NSString * _replyText;
    NSNumber * _replyTextId;
    NSNumber * _responseClassId;
}

@property (nonatomic, readonly) NSNumber *categoryId;
@property (nonatomic, readonly) NSNumber *isCustomResponse;
@property (nonatomic, readonly) NSNumber *isRobotResponse;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSNumber *modelId;
@property (nonatomic, readonly) NSNumber *replySubgroupId;
@property (nonatomic, readonly) NSString *replyText;
@property (nonatomic, readonly) NSNumber *replyTextId;
@property (nonatomic, readonly) NSNumber *responseClassId;

+ (id)responseItemArrayFromResponseKitArray:(id)arg1 forLocale:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categoryId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategoryId:(id)arg1 modelId:(id)arg2 responseClassId:(id)arg3 replySubgroupId:(id)arg4 replyTextId:(id)arg5 replyText:(id)arg6 language:(id)arg7 isCustomResponse:(id)arg8 isRobotResponse:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)isCustomResponse;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResponseItem:(id)arg1;
- (id)isRobotResponse;
- (id)language;
- (id)modelId;
- (id)replySubgroupId;
- (id)replyText;
- (id)replyTextId;
- (id)responseClassId;

@end
