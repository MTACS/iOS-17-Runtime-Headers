
@interface SGQuickResponse : NSObject {
    unsigned long long  _categoryId;
    bool  _isConfident;
    bool  _isCustomResponse;
    bool  _isRobotResponse;
    NSString * _lang;
    unsigned long long  _modelId;
    NSDictionary * _proactiveTrigger;
    unsigned long long  _replyTextId;
    unsigned long long  _semanticClassId;
    unsigned long long  _styleGroupId;
    NSString * _text;
}

@property (nonatomic, readonly) unsigned long long categoryId;
@property (nonatomic, readonly) bool isConfident;
@property (nonatomic, readonly) bool isCustomResponse;
@property (nonatomic, readonly) bool isRobotResponse;
@property (nonatomic, readonly, copy) NSString *lang;
@property (nonatomic, readonly) unsigned long long modelId;
@property (nonatomic, readonly) NSDictionary *proactiveTrigger;
@property (nonatomic, readonly) unsigned long long replyTextId;
@property (nonatomic, readonly) unsigned long long semanticClassId;
@property (nonatomic, readonly) unsigned long long styleGroupId;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (unsigned long long)categoryId;
- (id)description;
- (id)initWithProactiveTrigger:(id)arg1 isConfident:(bool)arg2;
- (id)initWithText:(id)arg1 lang:(id)arg2 replyTextId:(unsigned long long)arg3 styleGroupId:(unsigned long long)arg4 semanticClassId:(unsigned long long)arg5 modelId:(unsigned long long)arg6 categoryId:(unsigned long long)arg7 isCustomResponse:(bool)arg8 isRobotResponse:(bool)arg9 isConfident:(bool)arg10;
- (id)initWithText:(id)arg1 lang:(id)arg2 replyTextId:(unsigned long long)arg3 styleGroupId:(unsigned long long)arg4 semanticClassId:(unsigned long long)arg5 modelId:(unsigned long long)arg6 categoryId:(unsigned long long)arg7 isCustomResponse:(bool)arg8 isRobotResponse:(bool)arg9 isConfident:(bool)arg10 proactiveTrigger:(id)arg11;
- (bool)isConfident;
- (bool)isCustomResponse;
- (bool)isRobotResponse;
- (id)lang;
- (unsigned long long)modelId;
- (id)proactiveTrigger;
- (unsigned long long)replyTextId;
- (unsigned long long)semanticClassId;
- (void)setIsConfident:(bool)arg1;
- (unsigned long long)styleGroupId;
- (id)text;

@end
