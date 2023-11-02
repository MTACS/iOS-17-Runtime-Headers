
@interface CRTrackedDocumentOutputRegion : CRDocumentOutputRegion {
    unsigned long long  _trackedRegionType;
}

+ (id)documentWithTrackedRegionGroups:(id)arg1;
+ (id)documentWithTrackedRegions:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;

@end
