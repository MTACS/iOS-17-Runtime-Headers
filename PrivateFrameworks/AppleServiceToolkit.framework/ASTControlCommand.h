
@interface ASTControlCommand : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _actionStorage;
    bool  _forceSequential;
    bool  _haltOnError;
}

@property (nonatomic, retain) NSMutableDictionary *actionStorage;
@property (nonatomic) bool forceSequential;
@property (nonatomic) bool haltOnError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionStorage;
- (bool)allActionsFinished;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceSequential;
- (bool)haltOnError;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)performActionsWithSession:(id)arg1 queue:(id)arg2;
- (id)requestData;
- (id)requestWithData:(id)arg1 session:(id)arg2 queue:(id)arg3;
- (bool)reset;
- (void)setActionStorage:(id)arg1;
- (void)setForceSequential:(bool)arg1;
- (void)setHaltOnError:(bool)arg1;
- (void)updateAction:(id)arg1;

@end
