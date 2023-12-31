
@interface _NSUndoBeginMark : _NSUndoObject {
    id  _groupIdentifier;
    bool  _isDiscardable;
}

- (void)dealloc;
- (id)description;
- (id)groupIdentifier;
- (bool)isBeginMark;
- (bool)isDiscardable;
- (void)setDiscardable:(bool)arg1;
- (void)setGroupIdentifier:(id)arg1;

@end
