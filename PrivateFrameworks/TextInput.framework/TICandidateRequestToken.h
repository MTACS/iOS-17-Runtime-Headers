
@interface TICandidateRequestToken : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    TIDocumentState * _documentState;
    int  _shiftState;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) TIDocumentState *documentState;
@property (nonatomic, readonly) int shiftState;

+ (bool)supportsSecureCoding;
+ (id)tokenForKeyboardState:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)documentState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initForKeyboardState:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSameRequestAs:(id)arg1;
- (int)shiftState;
- (id)shortIdentifier;

@end
