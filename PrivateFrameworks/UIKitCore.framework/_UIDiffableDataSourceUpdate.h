
@interface _UIDiffableDataSourceUpdate : NSObject <_UIDiffableDataSourceUpdate> {
    long long  _action;
    id  _destinationIdentifier;
    bool  _destinationIdentifierIsSectionIdentifier;
    NSOrderedSet * _identifiers;
    bool  _isDeleteAll;
    bool  _isSectionOperation;
    long long  _relativePosition;
    bool  _shouldReconfigure;
}

@property (nonatomic, readonly) long long action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id destinationIdentifier;
@property (nonatomic, readonly) bool destinationIdentifierIsSectionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOrderedSet *identifiers;
@property (nonatomic, readonly) bool isDeleteAll;
@property (nonatomic, readonly) bool isSectionOperation;
@property (nonatomic, readonly) long long relativePosition;
@property (nonatomic, readonly) bool shouldReconfigure;
@property (readonly) Class superclass;

+ (id)updateDeleteAll;

- (void).cxx_destruct;
- (void)_throwIfInvalid;
- (long long)action;
- (id)description;
- (id)destinationIdentifier;
- (bool)destinationIdentifierIsSectionIdentifier;
- (id)identifiers;
- (id)initWithIdentifiers:(id)arg1 sectionIdentifiers:(id)arg2 action:(long long)arg3 desinationIdentifier:(id)arg4 relativePosition:(long long)arg5 destinationIsSection:(bool)arg6;
- (id)initWithItemIdentifiers:(id)arg1 action:(long long)arg2;
- (id)initWithItemIdentifiers:(id)arg1 action:(long long)arg2 destinationIdentifier:(id)arg3 relativePosition:(long long)arg4;
- (id)initWithItemIdentifiers:(id)arg1 appendingToDestinationSectionIdentifier:(id)arg2;
- (id)initWithReconfiguredItemIdentifiers:(id)arg1;
- (id)initWithSectionIdentifiers:(id)arg1 action:(long long)arg2;
- (id)initWithSectionIdentifiers:(id)arg1 action:(long long)arg2 destinationIdentifier:(id)arg3 relativePosition:(long long)arg4;
- (id)initWithSectionIdentifiers:(id)arg1 appendingToDestinationSectionIdentifier:(id)arg2;
- (bool)isDeleteAll;
- (bool)isSectionOperation;
- (long long)relativePosition;
- (bool)shouldReconfigure;

@end
