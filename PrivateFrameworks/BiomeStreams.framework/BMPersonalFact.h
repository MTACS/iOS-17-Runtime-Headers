
@interface BMPersonalFact : NSObject <BMProtoBufWrapper> {
    NSString * _objectAlias;
    NSString * _objectId;
    NSString * _predicateId;
    NSString * _subjectAlias;
    NSString * _subjectId;
    NSArray * _subjectIsa;
}

@property (nonatomic, readonly) NSString *objectAlias;
@property (nonatomic, readonly) NSString *objectId;
@property (nonatomic, readonly) NSString *predicateId;
@property (nonatomic, readonly) NSString *subjectAlias;
@property (nonatomic, readonly) NSString *subjectId;
@property (nonatomic, readonly) NSArray *subjectIsa;

- (void).cxx_destruct;
- (id)encodeAsProto;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSubjectId:(id)arg1 subjectAlias:(id)arg2 subjectIsa:(id)arg3 predicateId:(id)arg4 objectId:(id)arg5 objectAlias:(id)arg6;
- (id)objectAlias;
- (id)objectId;
- (id)predicateId;
- (id)proto;
- (id)subjectAlias;
- (id)subjectId;
- (id)subjectIsa;

@end
