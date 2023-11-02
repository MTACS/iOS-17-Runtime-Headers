
@interface SGRealtimeContact : NSObject <NSCopying, NSSecureCoding, SGRealtimeSuggestion> {
    NSString * _cnContactIdentifier;
    SGContact * _contact;
    SGExtractionInfo * _extractionInfo;
    bool  _isHarvested;
    int  _state;
    int  _updatedFields;
}

@property (nonatomic, readonly) NSString *cnContactIdentifier;
@property (nonatomic, readonly) SGContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SGExtractionInfo *extractionInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHarvested;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int updatedFields;

+ (id)realtimeContactForFields:(id)arg1 updatedFields:(int)arg2 addedToCuratedContact:(id)arg3;
+ (id)realtimeContactForNewContact:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cnContactIdentifier;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extractionInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(int)arg1 updatedFields:(int)arg2 contact:(id)arg3 identifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRealtimeContact:(id)arg1;
- (bool)isHarvested;
- (id)markedAsHarvested;
- (void)setCnContactIdentifier:(id)arg1;
- (void)setExtractionInfo;
- (int)state;
- (int)updatedFields;

@end
