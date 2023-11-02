
@interface GDKnosisResultContextItem : NSObject {
    void _answer;
    void _entityId;
}

@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;

- (void).cxx_destruct;
- (id)answer;
- (id)contextForAnswerParents;
- (id)entityIdentifier;
- (id)init;

@end
