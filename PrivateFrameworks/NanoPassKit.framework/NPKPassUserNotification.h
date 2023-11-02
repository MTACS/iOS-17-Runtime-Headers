
@interface NPKPassUserNotification : NPKUserNotification {
    PKPass * _pass;
}

@property (nonatomic, readonly) NSArray *identifierHashComponents;
@property (nonatomic, readonly) PKPass *pass;

- (void).cxx_destruct;
- (id)identifierHashComponents;
- (id)initWithPass:(id)arg1;
- (id)pass;

@end
