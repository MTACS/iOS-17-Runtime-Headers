
@interface _CFPrefsOversizedPlistDescription : NSObject {
    struct __CFDictionary { } * existingValues;
    struct __CFDictionary { } * newValues;
}

- (id)_descriptionOfDictionary:(struct __CFDictionary { }*)arg1 withKeyRedaction:(bool)arg2;
- (id)_descriptionWithKeyRedaction:(bool)arg1;
- (void)dealloc;
- (id)description;
- (id)redactedDescription;

@end
