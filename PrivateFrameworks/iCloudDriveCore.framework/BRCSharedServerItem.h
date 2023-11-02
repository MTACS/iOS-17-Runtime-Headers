
@interface BRCSharedServerItem : BRCServerItem {
    BRCServerStatInfo * _aliasDerivedStructureForDescription;
}

- (void).cxx_destruct;
- (id)aliasDerivedStructure;
- (id)aliasDerivedStructureForDescription;
- (id)asSharedItem;
- (id)fallbackParentAppLibraryOnFS;
- (id)fallbackParentItemIDOnFS;
- (id)fallbackParentItemOnFS;
- (id)fallbackParentServerItemOnFS;
- (bool)isSharedToMeChildItem;
- (bool)isSharedToMeTopLevelItem;
- (id)parentItemIDOnFS;
- (id)parentItemIDOnFSInDB:(id)arg1;
- (id)parentItemOnFS;
- (id)parentLocalItemOnFS;
- (id)parentZoneOnFS;
- (id)st;

@end
