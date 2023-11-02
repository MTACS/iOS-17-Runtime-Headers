
@interface ICASCollaboratorData : NSObject <AADataEventType> {
    NSNumber * _countOfCollaboratorAdded;
    NSNumber * _countOfCollaboratorRemoved;
}

@property (nonatomic, readonly) NSNumber *countOfCollaboratorAdded;
@property (nonatomic, readonly) NSNumber *countOfCollaboratorRemoved;

+ (id)dataName;

- (void).cxx_destruct;
- (id)countOfCollaboratorAdded;
- (id)countOfCollaboratorRemoved;
- (id)initWithCountOfCollaboratorAdded:(id)arg1 countOfCollaboratorRemoved:(id)arg2;
- (id)toDict;

@end
