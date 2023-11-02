
@interface SFPerformContactActionCommand : SFCommand <NSCopying, NSSecureCoding, SFPerformContactActionCommand> {
    int  _contactActionType;
    bool  _didDisplayHandleOptions;
    bool  _didSelectFromOptionsMenu;
    struct { 
        unsigned int contactActionType : 1; 
        unsigned int didDisplayHandleOptions : 1; 
        unsigned int didSelectFromOptionsMenu : 1; 
    }  _has;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (nonatomic) int contactActionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool didDisplayHandleOptions;
@property (nonatomic) bool didSelectFromOptionsMenu;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (int)contactActionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)didDisplayHandleOptions;
- (bool)didSelectFromOptionsMenu;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasContactActionType;
- (bool)hasDidDisplayHandleOptions;
- (bool)hasDidSelectFromOptionsMenu;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setContactActionType:(int)arg1;
- (void)setDidDisplayHandleOptions:(bool)arg1;
- (void)setDidSelectFromOptionsMenu:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

@end
