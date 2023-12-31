
@interface PKFelicaShinkansenTicket : NSObject <NSSecureCoding> {
    NSArray * _trains;
    NSNumber * _validityStartDate;
    NSNumber * _validityTerm;
}

@property (nonatomic, readonly, copy) NSArray *trains;
@property (nonatomic, readonly, copy) NSNumber *validityStartDate;
@property (nonatomic, readonly, copy) NSNumber *validityTerm;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)trains;
- (id)validityStartDate;
- (id)validityTerm;

@end
