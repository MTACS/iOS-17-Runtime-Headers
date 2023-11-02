
@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo> {
    NSFetchedResultsController * _controller;
    NSString * _indexTitle;
    NSString * _name;
    unsigned long long  _numberOfObjects;
    unsigned long long  _oldSectionNumber;
    id  _sectionId;
    NSArray * _sectionObjects;
    unsigned long long  _sectionOffset;
}

@property (nonatomic, readonly) NSString *indexTitle;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfObjects;
@property (nonatomic, readonly) NSArray *objects;
@property (nonatomic, readonly) id sectionId;

- (void)dealloc;
- (id)indexTitle;
- (id)name;
- (unsigned long long)numberOfObjects;
- (id)objects;
- (id)sectionId;

@end
