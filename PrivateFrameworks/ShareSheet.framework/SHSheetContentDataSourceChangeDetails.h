
@interface SHSheetContentDataSourceChangeDetails : NSObject {
    bool  _airDropBadgeChanged;
    bool  _animateDifferences;
    bool  _forceReload;
    NSArray * _modifiedIdentifiers;
    bool  _peopleCountChanged;
    bool  _sectionsChanged;
    bool  _snapshotChanged;
}

@property (nonatomic) bool airDropBadgeChanged;
@property (nonatomic) bool animateDifferences;
@property (nonatomic) bool forceReload;
@property (nonatomic, copy) NSArray *modifiedIdentifiers;
@property (nonatomic) bool peopleCountChanged;
@property (nonatomic) bool sectionsChanged;
@property (nonatomic) bool snapshotChanged;

- (void).cxx_destruct;
- (bool)airDropBadgeChanged;
- (bool)animateDifferences;
- (id)description;
- (bool)forceReload;
- (id)modifiedIdentifiers;
- (bool)peopleCountChanged;
- (bool)sectionsChanged;
- (void)setAirDropBadgeChanged:(bool)arg1;
- (void)setAnimateDifferences:(bool)arg1;
- (void)setForceReload:(bool)arg1;
- (void)setModifiedIdentifiers:(id)arg1;
- (void)setPeopleCountChanged:(bool)arg1;
- (void)setSectionsChanged:(bool)arg1;
- (void)setSnapshotChanged:(bool)arg1;
- (bool)snapshotChanged;

@end
