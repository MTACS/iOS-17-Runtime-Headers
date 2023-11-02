
@interface NSSWatchFace : NSObject <NSSecureCoding> {
    NSString * _faceDisplayName;
    NSUUID * _faceIdentifier;
    bool  _isActive;
    NSArray * _selectedFocusModeIdentifiers;
}

@property (nonatomic, retain) NSString *faceDisplayName;
@property (nonatomic, retain) NSUUID *faceIdentifier;
@property (nonatomic) bool isActive;
@property (nonatomic, retain) NSArray *selectedFocusModeIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)faceDisplayName;
- (id)faceIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (id)selectedFocusModeIdentifiers;
- (void)setFaceDisplayName:(id)arg1;
- (void)setFaceIdentifier:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setSelectedFocusModeIdentifiers:(id)arg1;

@end
