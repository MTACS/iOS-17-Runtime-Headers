
@interface AARadarDraft : NSObject {
    NSArray * _attachments;
    AARadarComponent * _component;
    NSString * _problemDescription;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) AARadarComponent *component;
@property (nonatomic, retain) NSString *problemDescription;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)attachments;
- (id)component;
- (id)initWithTitle:(id)arg1 problemDescription:(id)arg2 attachments:(id)arg3 component:(id)arg4;
- (id)problemDescription;
- (bool)sendForProcessNamed:(id)arg1 withDisplayReason:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAttachments:(id)arg1;
- (void)setComponent:(id)arg1;
- (void)setProblemDescription:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
