
@interface FBKDiffableSection : NSObject

@property (nonatomic, readonly) NSArray *rowIdentifiers;
@property (nonatomic, readonly) NSString *sectionIdentifier;

- (id)rowIdentifiers;
- (id)sectionIdentifier;

@end
