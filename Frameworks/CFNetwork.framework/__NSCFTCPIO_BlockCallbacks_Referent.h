
@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject {
    struct TCPIO_BlockCallbacks_Listener { int (**x1)(); struct CBs { id /* block */ x_2_1_1; id /* block */ x_2_1_2; id /* block */ x_2_1_3; id /* block */ x_2_1_4; id /* block */ x_2_1_5; id /* block */ x_2_1_6; } x2; id x3; int x4; } * _readListener;
    struct TCPIO_BlockCallbacks_Listener { int (**x1)(); struct CBs { id /* block */ x_2_1_1; id /* block */ x_2_1_2; id /* block */ x_2_1_3; id /* block */ x_2_1_4; id /* block */ x_2_1_5; id /* block */ x_2_1_6; } x2; id x3; int x4; } * _writeListener;
}

- (void)dealloc;
- (id)init;

@end
