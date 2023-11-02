
@interface HFDefaultRoomSuggestionVendor : NSObject <HFRoomSuggestionVendor> {
    NSSet * _roomSuggestions;
    NSURL * _roomSuggestionsPlistURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *roomSuggestions;
@property (nonatomic, readonly) NSURL *roomSuggestionsPlistURL;
@property (readonly) Class superclass;

+ (id)TVAccessorySuggestionVendor;
+ (id)homeAppSuggestionVendor;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRoomSuggestionsPlistURL:(id)arg1;
- (id)prioritizedRoomSuggestions;
- (id)roomSuggestions;
- (id)roomSuggestionsPlistURL;

@end
