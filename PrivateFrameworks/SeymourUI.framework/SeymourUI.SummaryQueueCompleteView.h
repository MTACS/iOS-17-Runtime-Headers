
@interface SeymourUI.SummaryQueueCompleteView : UIView {
    void doneButton;
    void onDoneButtonTapped;
    void onSaveButtonTapped;
    void saveButton;
    void subtitleLabel;
    void titleLabel;
    void totalDistanceDetailLabel;
    void totalDistanceTitleLabel;
    void totalEnergyDetailLabel;
    void totalEnergyTitleLabel;
    void totalTimeDetailLabel;
    void totalTimeTitleLabel;
}

- (void).cxx_destruct;
- (void)doneButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)saveButtonTapped;

@end
