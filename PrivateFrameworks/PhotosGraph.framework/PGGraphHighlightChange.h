
@interface PGGraphHighlightChange : PGGraphChange {
    NSString * _highlightUUID;
    unsigned long long  _updateTypes;
}

@property (nonatomic, readonly) NSString *highlightUUID;
@property (nonatomic, readonly) unsigned long long updateTypes;

- (void).cxx_destruct;
- (id)description;
- (id)highlightUUID;
- (id)initWithHighlightUUID:(id)arg1 updateTypes:(unsigned long long)arg2;
- (void)mergeChange:(id)arg1;
- (unsigned long long)type;
- (unsigned long long)updateTypes;

@end
