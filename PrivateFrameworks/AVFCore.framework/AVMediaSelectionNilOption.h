
@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    NSDictionary * _dictionary;
    bool  _displaysNonForcedSubtitles;
    id  _groupID;
    id  _groupMediaType;
    AVWeakReference * _weakReferenceToGroup;
}

- (id)_groupID;
- (id)_groupMediaType;
- (bool)_representsNilSelection;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (id)group;
- (id)initWithGroup:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPlayable;

@end
