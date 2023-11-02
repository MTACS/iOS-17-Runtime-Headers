
@interface _UIDatePickerLinkedLabelStorage : NSObject {
    NSHashTable * _attachedLabels;
    unsigned long long  _currentPriority;
    NSCache * _sizeCache;
    UILabel * _sizingLabel;
}

- (void).cxx_destruct;
- (void)_attachLabel:(id)arg1;
- (bool)_cachedSizeForKey:(id)arg1 size:(struct CGSize { double x1; double x2; }*)arg2;
- (unsigned long long)_currentPriority;
- (void)_detachLabel:(id)arg1;
- (void)_notifyAllLabelsExcept:(id)arg1;
- (void)_resetPriority;
- (void)_setCachedSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)_setPriority:(long long)arg1 label:(id)arg2;
- (struct CGSize { double x1; double x2; })_sizeForText:(id)arg1 font:(id)arg2 height:(double)arg3 overrideAttributes:(id)arg4;
- (id)init;

@end
