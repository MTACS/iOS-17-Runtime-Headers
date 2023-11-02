
@interface PSUICellularErrorGlossary : NSObject

+ (id)sharedInstance;

- (id)getLogger;
- (id)init;
- (id)initPrivate;
- (id)messageForError:(id)arg1;

@end
