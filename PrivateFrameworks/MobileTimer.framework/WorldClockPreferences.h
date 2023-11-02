
@interface WorldClockPreferences : NSObject

- (id)cities;
- (bool)cityDataNeedsUpdate;
- (void)cityDataUpdated;
- (void)clearOutCityUpdatePref;
- (bool)defaultCitiesAdded;
- (id)defaultsKeys;
- (id)lastModified;
- (void)setCities:(id)arg1;
- (void)setDefaultCitiesAdded:(bool)arg1;
- (void)setLastModified:(id)arg1;
- (bool)synchronize;

@end
