
@interface EKDirectorySearchResultSet : NSObject {
    NSSet * _groups;
    NSSet * _locations;
    NSSet * _people;
    NSSet * _resources;
}

@property (nonatomic, retain) NSSet *groups;
@property (nonatomic, retain) NSSet *locations;
@property (nonatomic, retain) NSSet *people;
@property (nonatomic, retain) NSSet *resources;

- (void).cxx_destruct;
- (id)groups;
- (id)locations;
- (id)people;
- (id)resources;
- (void)setGroups:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setResources:(id)arg1;

@end
