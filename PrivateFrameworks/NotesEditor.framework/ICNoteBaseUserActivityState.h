
@interface ICNoteBaseUserActivityState : NSObject {
    CSSearchableItemAttributeSet * _attributeSet;
    NSDictionary * _contentAttributes;
    NSString * _persistentIdentifier;
}

@property (nonatomic, retain) CSSearchableItemAttributeSet *attributeSet;
@property (nonatomic, readonly, copy) NSDictionary *contentAttributes;
@property (nonatomic, retain) NSString *persistentIdentifier;

- (void).cxx_destruct;
- (id)attributeSet;
- (id)contentAttributes;
- (id)initWithNote:(id)arg1;
- (id)persistentIdentifier;
- (void)setAttributeSet:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)updateUserActivity:(id)arg1;

@end
