
@interface WBSFaviconProviderRecordCache : NSObject {
    NSMutableDictionary * _iconURLStringToInfoDictionary;
    NSMutableDictionary * _iconUUIDToURLStringDictionary;
}

- (void).cxx_destruct;
- (id)dateAddedForFaviconURLString:(id)arg1 iconUUID:(id*)arg2 size:(struct CGSize { double x1; double x2; }*)arg3;
- (id)iconInfoForURLString:(id)arg1;
- (id)init;
- (void)removeAllRecords;
- (void)removeRecordForIconUUIDs:(id)arg1;
- (void)setDateAdded:(id)arg1 forFaviconURLString:(id)arg2 iconUUID:(id)arg3 iconSize:(struct CGSize { double x1; double x2; })arg4 hasGeneratedResolutions:(bool)arg5;

@end
