
@interface _UILibArchiveReaderLoadedItem : _UILibArchiveItem {
    long long  _sequenceIndex;
}

@property (nonatomic) long long sequenceIndex;

- (id)description;
- (long long)sequenceIndex;
- (void)setSequenceIndex:(long long)arg1;

@end
