
@interface WBSStartPageSectionSerialization : NSObject

+ (id)decodeSectionsFromData:(id)arg1 expectedFormat:(long long)arg2 allowingFallbackFormats:(bool)arg3 error:(id*)arg4;
+ (id)decodeSectionsWithData:(id)arg1 format:(long long)arg2 error:(id*)arg3;
+ (id)encodeSectionsAsLocalData:(id)arg1 error:(id*)arg2;
+ (id)encodeSectionsAsSyncableData:(id)arg1 existingSyncableData:(id)arg2 error:(id*)arg3;

@end
