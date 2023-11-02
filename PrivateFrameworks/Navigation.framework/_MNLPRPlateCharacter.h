
@interface _MNLPRPlateCharacter : NSObject {
    NSMutableDictionary * _fillTypes;
    NSString * _glyph;
    bool  _isPickupChar;
    NSArray * _validReplacementChars;
    NSMutableOrderedSet * _valueMappings;
}

- (void).cxx_destruct;
- (id)description;

@end
