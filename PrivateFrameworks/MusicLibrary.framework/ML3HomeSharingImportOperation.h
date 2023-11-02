
@interface ML3HomeSharingImportOperation : ML3DAAPImportOperation {
    int  _playlistNameOrder;
}

- (bool)_performHomeSharingImportWithTransaction:(id)arg1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })containerImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1 withTrackIds:(struct vector<long long, std::allocator<long long>> { long long *x1; long long *x2; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x_3_1_1; } x3; })arg2 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> { void *x1; void *x2; struct __compressed_pair<std::unordered_set<std::string> *, std::allocator<std::unordered_set<std::string>>> { void *x_3_1_1; } x3; })arg3;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (unsigned long long)importSource;
- (void)main;
- (void)updateImportProgress:(float)arg1;

@end
